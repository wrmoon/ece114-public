#include <vector>
#include <iostream>

using namespace std;

class Thing
{
    private:
        string m_id;
    public:
        Thing(const string & id) : m_id{id} {};
        Thing(const Thing & other) : m_id{other.m_id} 
        {
            cout << " --- in thing copy ctor " << m_id << endl;
        }

        string getId() const { return m_id; }

};

class Box
{
    private:
        vector<Thing*> m_things;
        int m_num_things;
        string m_id;

    public:
        Box(const string& id) : m_num_things{0}, m_id{id} {}
        ~Box() {}

        void setId(const string& id) 
        {
            m_id = id;
        }

        // assignment operator
        Box & operator=(const Box & other)
        {
            if (this != &other) // avoid self-assignment
            {
                cout << "in Box " << m_id << " assignment operator" << endl;

                m_things = other.m_things;
                m_num_things = other.m_num_things;
                m_id = other.m_id;
            }

            return *this;
        }

        // copy constructor
        Box(const Box & other) 
            : m_things{other.m_things}, 
                m_num_things{other.m_num_things},
                m_id{other.m_id}
        {
            for (auto other_thing : other.m_things)
            {
                new thing = Thing{other_thing};
                m_things.push_back(thing);
            }
            cout << "in Box " << this << " " << m_id << " copy constructor" << endl;
        }

    void addThing(Thing* thing) 
    {
        m_things.push_back(thing);
        m_num_things++;
    }

    string getContents() const
    {
        string contents = "I am ";
        contents += m_id + ". I have ";
        contents += to_string(m_num_things);
        contents += " things:\n";
        for (const auto &i : m_things)
        {
            contents += i->getId() + "\n";
        }
        return contents;
    }

};

int main ()
{
    Box box1{"box1"};
    Thing * thing1 = new Thing{"I am thing One"};
    Thing * thing2 = new Thing{"I am thing Two"};

    cout << "The real box 1 is " << &box1 << endl;

    box1.addThing(thing1);
    box1.addThing(thing2);

    cout << box1.getContents();


    Box box2 = box1; // copy constructor
    cout << "============\n";
    cout << box2.getContents();
    box2.setId("box2");
    cout << box2.getContents();

    delete thing1; thing1 = nullptr;
    delete thing2; thing2 = nullptr;
    
    //box1.setId("new box1");
    cout << "============\n";
    cout << box2.getContents();

    #if 0

    cout << "============\n";
    Box box3{"box 3"};
    cout << box3.getContents();
    box3 = box1;
    cout << "============\n";
    cout << box3.getContents();
    #endif

    return 0;
}
