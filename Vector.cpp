
#include <iostream>
#include <vector>
using namespace std;

template <class T>

void display(vector<T> &v){
    cout<<"displaying this vector "<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    //Ways to create a vector
    vector<int> vec1;//Zero length vector
    display(vec1);
    int element,size = 5;
    vector<char> vec2(4);// 4- element character vector
    vector<double> vec3(vec2);// 4- element double vector
    vector<int> vec(6,3); //6-element vector of threes
    display(vec);
    
    cout<<vec.size();

    
    
    /*std::cout << "Enter the size of vector" << std::endl;
    std::cin >> size;
    for(int i = 0;i<size;i++){
        cout<<"Enter the element for the given vector.."<<endl;
        cin>>element;
        vec1.push_back(element);
    }*/
    //To delete the element in the vector
    //vec1.pop_back();

    display(vec1);
    vector<int>:: iterator iter = vec1.begin();
    vec1.insert(iter,50,566); //Insert the elememnt at the first position
    display(vec1);

    return 0;
}
