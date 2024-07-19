class Base {
public:
    int x;
protected:
    int y;
private:
    int z;
};

class PublicDerived : public Base {
    // x is public
    // y is protected
    // z is not accessible
};

class PrivateDerived : private Base {
    // x is private
    // y is private
    // z is not accessible
};
