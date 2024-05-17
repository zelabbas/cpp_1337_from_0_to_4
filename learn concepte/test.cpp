#include <iostream>

class Base {
public:
    void publicMethod() {
        std::cout << "Base public method" << std::endl;
    }

protected:
    void protectedMethod() {
        std::cout << "Base protected method" << std::endl;
    }

private:
    void privateMethod() {
        std::cout << "Base private method" << std::endl;
    }
};

class PublicDerived : public Base {
public:
    void accessMethods() {
        publicMethod();      // Accessible
        protectedMethod();   // Accessible
        // privateMethod();  // Not accessible
    }
};

class ProtectedDerived : protected Base {
public:
    void accessMethods() {
        publicMethod();      // Accessible
        protectedMethod();   // Accessible
        // privateMethod();  // Not accessible
    }
};

class PrivateDerived : private Base {
public:
    void accessMethods() {
        publicMethod();      // Accessible
        protectedMethod();   // Accessible
        // privateMethod();  // Not accessible
    }
};

int main() {
    PublicDerived pubDer;
    // pubDer.accessMethods();  // Accessible because of public inheritance

    ProtectedDerived protDer;
	// protDer.accessMethods();
    // protDer.publicMethod(); // Not accessible because of protected inheritance

    PrivateDerived privDer;
    privDer.accessMethods(); // Not accessible because of private inheritance
    return 0;
}
