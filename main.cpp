#include <iostream>
#include "iterator.hpp"
#include "visitor.hpp"
#include "header-files/add.hpp"
#include "header-files/op.hpp"

int main(int argc, char** argv) {
    Parse* p = new Parse();
    Base* b = p->parse(argv, argc);
    Add* dummy = new Add(b, new Op(5));

    CountVisitor* visit = new CountVisitor();
    PreorderIterator* preorder = new PreorderIterator(dummy);

    preorder->first();
    while (!preorder->is_done()) {
        preorder->current()->accept(cv);
        preorder->next();
    }
    
    printf("number of +: %i\n", visit->add_count());
    printf("number of abs: %i\n", visit->abs_count());
    printf("number of operands: %i\n", visit->op_count() - 1); // subtract the dummy

    std::cout << b->stringify() << " = " << b->evaluate() << std::endl;
    return 0;
}