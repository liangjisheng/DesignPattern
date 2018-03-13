
#include "AbstractFactory.h"

AbstractFactory::AbstractFactory() {}

AbstractFactory::~AbstractFactory() {}


FactoryA::FactoryA() {}

FactoryA::~FactoryA() {}

AbstractProduct* FactoryA::createProduct() { return new ProductA(); }


FactoryB::FactoryB() {}

FactoryB::~FactoryB() {}

AbstractProduct* FactoryB::createProduct() { return new ProductB(); }