#ifndef STRUCT_RBT_HPP
# define STRUCT_RBT_HPP

enum ncolor {BLACK, RED};

namespace ft
{
    template <class Pair>
    struct RBTNode{
    public:

        /*-------------------------------------------------------
        default constructor
        ---------------------------------------------------------*/
        RBTNode():color(BLACK), content(), parent(NULL),right(NULL), left(NULL){}

        /*-------------------------------------------------------
        constructor
        ---------------------------------------------------------*/
        RBTNode(ncolor col, Pair cont,struct RBTNode &par, struct RBTnode &r, struct RBTnode &l):
        color(col), content(cont), parent(par), right(r), left(l){}

        /*-------------------------------------------------------
        Destructor
        ---------------------------------------------------------*/
        ~RBTNode(){}
        RBTNode    &operator=(const RBTNode &other){
            color = other.color;
            content = other.content;
            parent = other.parent;
            right = other.right;
            left = other.left;
            return (*this);
        }

        ncolor          color;
        Pair            content;
        struct RBTNode  *parent, *right, *left;
    };
}


#endif