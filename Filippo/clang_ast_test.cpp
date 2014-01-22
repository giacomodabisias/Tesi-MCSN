
class A {
public:
	int x;
	void set_x(int val) {
		x = val * 2;
	}
	
	int get_x() {
		return x;
	}

};

int main() {

	A a;
	int  val = 5;

	a.set_x(val);
}



/*clang -Xclang -ast-dump -fsyntax-only clang_ast_test.cpp */
TranslationUnitDecl
|-CXXRecordDecl <clang_ast_test.cpp:2:1, line:13:1> class A
| |-CXXRecordDecl <line:2:1, col:7> class A
| |-AccessSpecDecl <line:3:1, col:7> public
| |-FieldDecl <line:4:2, col:6> x 'int'
| |-CXXMethodDecl <line:5:2, line:7:2> set_x 'void (int)'
| | |-ParmVarDecl <line:5:13, col:17> val 'int'
| | `-CompoundStmt <col:22, line:7:2>
| |   `-BinaryOperator <line:6:3, col:13> 'int' lvalue '='
| |     |-MemberExpr <col:3> 'int' lvalue ->x
| |     | `-CXXThisExpr <col:3> 'class A *' this
| |     `-BinaryOperator <col:7, col:13> 'int' '*'
| |       |-ImplicitCastExpr <col:7> 'int' <LValueToRValue>
| |       | `-DeclRefExpr <col:7> 'int' lvalue ParmVar 'val' 'int'
| |       `-IntegerLiteral <col:13> 'int' 2
| |-CXXMethodDecl <line:9:2, line:11:2> get_x 'int (void)'
| | `-CompoundStmt <line:9:14, line:11:2>
| |   `-ReturnStmt <line:10:3, col:10>
| |     `-ImplicitCastExpr <col:10> 'int' <LValueToRValue>
| |       `-MemberExpr <col:10> 'int' lvalue ->x
| |         `-CXXThisExpr <col:10> 'class A *' this
| |-CXXConstructorDecl <line:2:7> A 'void (void)' inline
| | `-CompoundStmt <col:7>
| `-CXXConstructorDecl <col:7> A 'void (const class A &)' inline
|   `-ParmVarDecl <col:7> 'const class A &'
`-FunctionDecl <line:15:1, line:21:1> main 'int (void)'
  `-CompoundStmt <line:15:12, line:21:1>
    |-DeclStmt <line:17:2, col:5>
    | `-VarDecl <col:2, col:4> a 'class A'
    |   `-CXXConstructExpr <col:4> 'class A' 'void (void)'
    |-DeclStmt <line:18:2, col:14>
    | `-VarDecl <col:2, col:13> val 'int'
    |   `-IntegerLiteral <col:13> 'int' 5
    `-CXXMemberCallExpr <line:20:2, col:13> 'void'
      |-MemberExpr <col:2, col:4> '<bound member function type>' .set_x
      | `-DeclRefExpr <col:2> 'class A' lvalue Var 'a' 'class A'
      `-ImplicitCastExpr <col:10> 'int' <LValueToRValue>
        `-DeclRefExpr <col:10> 'int' lvalue Var 'val' 'int'
