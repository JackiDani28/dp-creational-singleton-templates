//
// Created by Maikol Guzman Alan on 4/6/22.
//

#ifndef DP_CREATIONAL_SINGLETON_TEMPLATES_USERDATABASE_H
#define DP_CREATIONAL_SINGLETON_TEMPLATES_USERDATABASE_H

#include "SingletonDatabase.h"

class UserDatabase final : public SingletonDatabase<UserDatabase> {
private:
    map<string, int> users;
public:
    UserDatabase();
    virtual ~UserDatabase();

    int getAge(const string &name);/**es distinto porque tiene un int y no un double*/
};


#endif //DP_CREATIONAL_SINGLETON_TEMPLATES_USERDATABASE_H
