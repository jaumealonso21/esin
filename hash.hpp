
template<typename T>
class Hash {
static long const MULT = 31415926;
public:
    int operator()(const T &x) const;
};
