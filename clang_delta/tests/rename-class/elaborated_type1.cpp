struct XXX {};

template<typename T1, typename T2>
struct AAA {
  typedef T2 new_type;
};

struct BBB : public AAA<int, XXX>::new_type
{ };
