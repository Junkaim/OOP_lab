# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<cmath>
double Cylinder :: SurfaceArea(){
    
    return (2*radius*M_PI*(radius+height));
}

double Cylinder :: Volume(){

    return (M_PI*radius*radius*height);
}

double Cylinder :: Circumference(){

    return (2*M_PI*radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{

    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    
    out << fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
