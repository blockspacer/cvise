void foo();
namespace NS2 {
  using ::foo;
  void bar () { foo(); }
}
