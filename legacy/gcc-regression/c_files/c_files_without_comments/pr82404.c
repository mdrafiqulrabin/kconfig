 

 
 

enum eShape { eSquare, eCircle, eShpere, eTetraeder };

double test_switch_native(enum eShape shape, double r) {
    switch(shape) {
    case eSquare:    return 2;
    case eCircle:    return 3;
    case eShpere:    return 4;
    case eTetraeder: return 5;
    }
}

 

