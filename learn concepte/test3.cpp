
#include <iostream>

class Manager; // Forward declaration

class Resource {
public:
    Resource(Manager* mgr) : manager(mgr) {
        std::cout << "Resource acquired" << std::endl;
    }
    ~Resource() {
        std::cout << "Resource released" << std::endl;
    }
    void useResource();

private:
    Manager* manager;
};

class Manager {
public:
    Manager() {
        resource = new Resource(this);
        std::cout << "Manager created" << std::endl;
    }
    ~Manager() {
        delete resource; // Resource is deleted first
        std::cout << "Manager destroyed" << std::endl;
    }
    void doSomething() {
        std::cout << "Manager is doing something" << std::endl;
    }

private:
    Resource* resource;
};

void Resource::useResource() {
    if (manager) {
        manager->doSomething();
    }
}

int main() {
    Manager* mgr = new Manager();
    Manager* mggr = mgr;
    delete mgr; // Manager is deleted, causing resource to be deleted first
	
    mgr->doSomething();


    return 0;
}