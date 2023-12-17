#pragma once
#include "Component.h"
#include <list>
using namespace std;
class Composite : public Component
{
    protected:
        std::list<Component*> children;
    public:
        void Add(Component *component) {
            children.push_back(component);
            component->setParent(this);
        }
        void Remove(Component *component) {
            children.remove(component);
            component->setParent(nullptr);
        }
        bool IsComposite() const {
            return true;
        }
        std::string Operation() const {
            std::string result;
            for (const auto& c : this->children) {
                if (c == children.back()){
                    result += c->Operation();
                } else {
                    result += c->Operation() + "+";
                }
            }
            return "Branch(" + result + ")";
        }
};