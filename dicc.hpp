#include "hash.cpp"

template<typename Clau, typename Valor, typename HashFunction = Hash<int>>
class dicc {
public:
    dicc();

    void consulta(const Clau &k, const Valor &v, bool hi_es);
    void insereix(const Clau &k, const Valor &v);
    void elimina(const Clau &k);
private:
    struct node_hash {
        Clau _k;
        Valor _v;
        node_hash *_seg;
        node_hash(const Clau &k, const Valor &v, node_hash *seg = NULL);
    };
    node_hash **_taula;
    unsigned int _M;
    unsigned int _quants;

    static int hash(const Clau &k) {
        HashFunction<Clau> h;
        return h(k) % _M;
    }
};