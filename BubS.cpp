#include <iostream>

class StData
{
    //Size and contains of original, sorted arrays a kept private.
    private:
        int size;
        int *p = new int[100];
        int *bubble = new int[100];
        
    //In the main program accessible next methods:
    public:
        //Ask user about array size
        void setSize(){
                        std::cout<<"\nEnter array size: ";
                        std::cin>>size;
                    }
        
        //Take size value
        int getSize(){return size;}        
        
        //Ask user about oirignal array
        void getData(int N){
                        int input;
                        std::cout<< "\nEnter values row by row:"<<'\n';
                        for(int i = 0; i != N; ++i)
                            {
                                std::cout<<i<<". ";
                                std::cin>>input;
                                *(p+i)=input;
                                *(bubble+i)=input;
                            }
                    }
        
        //Apply method for bubble sorting
        void sortDataBubble(int N){
                        int temp=0;
                        while(--N>0)
                                {
                                for(int i = 1; i <= N; ++i)
                                    {
                                        if(*(bubble+i-1)>*(bubble+i))
                                        {
                                            temp=*(bubble+i);
                                            *(bubble+i)=*(bubble+i-1);
                                            *(bubble+i-1)=temp;
                                        }
                                    }
                                }
                    }

        //Print original array
        void printStoredData(int N){
                        std::cout<<"\nProgram stored data:\n";
                        for(int i = 0; i != N; ++i) std::cout<<i<<". "<<*(p+i)<<'\n';
                    }
        
        //Print sorted array
        void printBubbleSorted(int N)
                    {
                        std::cout<<"\nBubble sorted data:\n";
                        for(int i = 0; i != N; ++i) std::cout<<i<<". "<<*(bubble+i)<<'\n';
                    }
};

int main()
{
    StData call;
    
    int len;
    
    call.setSize();
    
    len=(call.getSize());
    
    call.getData(len);
    
    call.sortDataBubble(len);
    
    call.printStoredData(len);
    
    call.printBubbleSorted(len);
}