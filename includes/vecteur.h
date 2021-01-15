#include <iostream>

template<class T> class Vecteur{
    private:
        int currentSize;
        int currentCapacity;
        T* elements;

    public:
        Vecteur(){
            currentCapacity = 1;
            currentSize = 0;
            elements = new int[currentCapacity];
        }

        ~Vecteur(){
            delete[] elements;
        }

        int size(){
            return currentSize;
        }

        int capacity(){
            return currentCapacity;
        }

        bool isEmpty(){
            return currentSize == 0;
        }

        T* popAt(int index){
		return nullptr;
        }
        
        T* readAt(int index){
        	return nullptr;
        }

        bool append(T newElement){
		return false;
        }

        bool clear(){
		return false;
        }

        void print(){

        }
};
