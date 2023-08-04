# operator overloading can be done using 4 approaches
1. unary operator overloading       (member function)
2. binary operator overloading      (member function)
3. unary operator overloading       (friend function)
4. binary operator overloading      (friend function)
# unary operator 
1. member - no arguement 
2. friend - one arguement with & operator
# binary operator 
1. member - one arguement 
2. friend - 2 arguements
# unary operator 
unary opertor can be prefix or postfix. Prefix need to assign the data to the function first. so need datatype as argument in unary operator overloading function. complex operator++(int){}
# virtual functions 
* if base class & derived class has the same name. derived class fuction shows.
* if we create a pointer to base class and assign the address of the object of derived class and access the common function using arrow operator then base class function being called
* to avoid this we add virtual to the base class function
* virtual function shoule be accessed using pointer & reference of the base class to achieve runtime polymorphism
# pure virtual function 
it must be overriden by the derived class so no need to be defined. declared using =0 syntax