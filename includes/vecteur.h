#include <iostream>
#include <string>

template<class T> class Vecteur{
    private:
        int currentSize;
        int currentCapacity;
        T* elements;

        void initializeVariables(){
            currentCapacity = 1;
            currentSize = 0;
            elements = new T[currentCapacity];
        }

        bool augmentSize(){
            try {
                currentCapacity *= 2;
                T* temp = new T[capacity()];
                for(int i = 0; i < size(); i++){
                    temp[i] = elements[i];
                }
                delete[] elements;
                elements = temp;
            } catch(const std::exception e) {
                return false;
            }

            return true;
        }

    public:
        Vecteur(){
            initializeVariables();
        }

        ~Vecteur(){
            clear();
        }

        int size() const{
            return currentSize;
        }

        int capacity() const{
            return currentCapacity;
        }

        bool isEmpty() const{
            return currentSize == 0;
        }

        T* popAt(const int index){
            if(index >= 0 && index < size()){
                T* poppedValue = &elements[index];
                for(int i = index; i < size() - 1; i++){
                    elements[i] = elements[i + 1];
                }
                currentSize--;
                return poppedValue;
            }
		    return nullptr;
        }
        
        T* readAt(const int index) const{
            if(index >= 0 && index < size()){
                return &elements[index];
            }
        	return nullptr;
        }

        bool append(const T newElement){
            if(size() == capacity()){
                bool success = augmentSize();
                if(!success)
                    return false;
            }
            elements[currentSize++] = newElement;

		    return true;
        }

        bool clear(){
            try {
                delete[] elements;
                initializeVariables();
            }
            catch(const std::exception e){
                return false;
            }

		    return true;
        }

        void print() const{
            std::string output = "[";
            for(int i =  0; i < capacity(); i++){
                if(i < size()){                    
                    output += std::to_string(elements[i]);
                }else{
                    output += " ";
                }

                if(i < capacity() - 1)
                    output += ", ";
            }
            output += "]" ;
            std::cout << output << std::endl;
        }
};
