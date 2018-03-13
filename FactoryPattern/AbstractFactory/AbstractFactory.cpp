
#include "AbstractFactory.h"

AbstractFactory::AbstractFactory() {}

AbstractFactory::~AbstractFactory() {}


Factory1::Factory1() {}

Factory1::~Factory1() {}

AbstractProductA* Factory1::createProductA() { return new ProductA_1(); }

AbstractProductB* Factory1::createProductB() { return new ProductB_1(); }


Factory2::Factory2() {}

Factory2::~Factory2() {}

AbstractProductA* Factory2::createProductA() { return new ProductA_2(); }

AbstractProductB* Factory2::createProductB() { return new ProductB_2(); }