// // single level, multi level, multiple, hierarchial,hybrid inheritence
// #include <iostream>
// using namespace std;
// class rectangle{
//     private:
//     int x;

//     public:
//     int y;
// };
// //single level
// class child1: public rectangle{

// };
// int main(){

//     return 0;
// }

    //MULTPLE INHERITENCE



// #include <iostream>
// using namespace std;

//     class grandParent{
//     int x;
//     };

//     class rectangle: public grandParent{
//     private:
//     int x;

//     public:
//     int y;
//     };

//     class child1: public rectangle{

//     };

    // MULTI LEVEL INHERITENCE

//     int main(){

//     return 0;
//     }

//     #include <iostream>
//     using namespace std;

//     class square{
//     private:
//     int a;
//     };

//     class rectangle{
//     private:
//     int x;

//     public:
//     int y;
//     };

//     class circle: public rectangle, square{

//     };


    // HIERARCHIAL INHERITENCE

// int main(){

//     return 0;
// }
//     #include <iostream>
//     using namespace std;
    
    

//     class rectangle{
//     private:
//     int x;

//     public:
//     int y;
//     };

//     class square: public rectangle{
//     private:
//     int a;
//     };

//     class circle: public rectangle{

//     };
// int main(){

//     return 0;
// }

    //HYBRID INHERITENCE

    #include <iostream>
        using namespace std;
        
        

        class rectangle{
        private:
        int x;

        public:
        int y;
        };

        class square: public rectangle{
        private:
        int a;
        };

        class circle: public rectangle{

        };
        class grandchild: public circle{
            int x;
        };
    int main(){

        return 0;
    }