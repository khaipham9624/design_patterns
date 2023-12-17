#pragma once
#include <string>

class Component {
    protected:
        Component *parent;
    public:
        virtual ~Component(){};
        void setParent(Component *parent){
            this->parent = parent;
        }

        Component* getParent(){
            return this->parent;
        }

        virtual void Add(Component *component) {}
        virtual void Remove(Component *component) {}
        virtual bool IsComposite() const {
            return false;
        }
        virtual std::string Operation() const = 0;
};