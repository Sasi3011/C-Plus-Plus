//Create a sentence word counter that determines the number of words in an input text

#include<iostream>
#include<string>
using namespace std;
class word_count
{
    private:
    string sentence;
    int count;
    public:
    word_count()
    {
        cout<<"Enter a sentence: ";
        getline(cin, sentence);
        count = 1;
    }
    void display()
    {
        for(int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] == ' ')
                count++;
        }
        cout<<"The number of words in the sentence is: "<<count<<endl;
    }
};
int main()
{
    word_count w;
    w.display();
    return 0;
}
