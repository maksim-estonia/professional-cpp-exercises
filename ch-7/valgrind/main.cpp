class Simple
{
private:
    int* m_intPtr;
public:
    Simple(/* args */) {m_intPtr = new int{}; }
    ~Simple() { delete m_intPtr; }
    void setValue(int value) { *m_intPtr = value; }
};

void doSomething (Simple*& outSimplePtr)
{
    outSimplePtr = new Simple{};
}

int main()
{
    Simple* simplePtr { new Simple{} };

    doSomething(simplePtr);

    delete simplePtr;
}