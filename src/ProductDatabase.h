//
// Created by Maikol Guzman Alan on 4/5/22.
//

#ifndef DP_CREATIONAL_SINGLETON_TEMPLATES_PRODUCTDATABASE_H
#define DP_CREATIONAL_SINGLETON_TEMPLATES_PRODUCTDATABASE_H

#include "SingletonDatabase.h"

class ProductDatabase final : public SingletonDatabase<ProductDatabase> {/**esta realizando una herencia al pasar el nombre como un argumento, asegurando la reutilización del codigo*/
private:
    map<string, double> products;/**tiene una lista*/
public:
    ProductDatabase();
    virtual ~ProductDatabase();

    double getPrice(const string &name);
};


#endif //DP_CREATIONAL_SINGLETON_TEMPLATES_PRODUCTDATABASE_H
