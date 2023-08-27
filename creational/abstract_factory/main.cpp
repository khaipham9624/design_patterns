#include "ArtDecoFurnitureFactory.h"
#include "ModernFurnitureFactory.h"
#include "VictorianFurnitureFactory.h"

int main(){
    // FurnitureFactory* furnitureFactory = new ArtDecoFurnitureFactory();
    FurnitureFactory* furnitureFactory = new ModernFurnitureFactory();
    // FurnitureFactory* furnitureFactory = new VictorianFurnitureFactory();
    Chair* chair = furnitureFactory->createChair();
    Table* table = furnitureFactory->createTable();
    Sofa* sofa = furnitureFactory->createSofa();
    chair->sitOn();
    table->putOn();
    sofa->layOn();
}