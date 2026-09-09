#include <iostream> 
 
class Economic { 
public: 
    void display() const { 
        std::cout << "Economic Information\n"; 
    } 
}; 
 
class Financial { 
public: 
    void display() const { 
        std::cout << "Financial Information\n"; 
    } 
}; 
 
class Student : public Economic, public Financial { 
public: 
    void displayAll() const { 
        Economic::display(); 
        Financial::display(); 
    } 
}; 
 
int main() { 
    Student student; 
 
    student.Economic::display(); 
    student.Financial::display(); 
    student.displayAll(); 
 
    return 0; 
} 