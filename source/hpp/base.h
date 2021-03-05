#pragma once
/*
    ----------------------------------------------------------------
        SCHEME:
    ----------------------------------------------------------------

        calss name: 
        name_space::class_name

        variable name:
        variable_name
    ----------------------------------------------------------------
*/ 

#include <assert.h>
#include <fstream>
#include <iostream>
#include <list>
#include <stdexcept>
#include <string>
#include <vector>

//-----------------------------------------------------------------

#define NEW_MACRO(this_class)                                   \
this_class* this_class::new() { STANDARD_NEW_BODY(this_class); }

#define STANDARD_NEW_BODY(this_class)                           \
this_class* result = new this_class;                            \
return result

//-----------------------------------------------------------------

#define SET_MACRO(name,type)                                    \
virtual void set_##name (const type& _arg)                      \
{                                                               \
    if (this->name != _arg)                                     \
    {                                                           \
        this->name = _arg;                                      \
    }                                                           \
}

//-----------------------------------------------------------------

#define GET_MACRO(name,type)                                     \
virtual type get_##name ()                                       \
{                                                                \
    return this->name;                                           \
}

//-----------------------------------------------------------------

#define GET_REFERENCE_MACRO(name,type)                           \
virtual type& get_##name##_reference()                           \
{                                                                \
    return (this->name);                                         \
}

//-----------------------------------------------------------------

#define FREE_OBJ_MACRO(name)                                    \
if(name!=nullptr){                                              \
    delete name;                                                \
    name = nullptr;                                             \
}

//-----------------------------------------------------------------

#define FREE_ARR_MACRO_1P(name)                                 \
if(name!=nullptr){                                              \
    delete[] name;                                              \
    name = nullptr;                                             \
}

//-----------------------------------------------------------------

#define DELETE_OBJECT_IN_CONTAINER(V)                           \
for (auto it : V)                                               \
{                                                               \
    FREE_OBJ_MACRO(it)                                          \
}

#define SUCCESS 0
#define ERROR 1
#define WARNING 2