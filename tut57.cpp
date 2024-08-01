#include<iostream>
#include<cstring>
using namespace std;

class CWH
{
    protected:
    string title;
    float rating;

    public:

    CWH(string s,float r)
    {
        title=s;
        rating=r;
    }

    virtual void display(){}

};

class CWHvideo:public CWH
{
    int videolength;
    public:
    CWHvideo(string s, float r, int vlen):CWH(s,r)
    {
        videolength=vlen;
    }

    void display()
    {
        cout<<"this is an amazing video with title  "<<title<<endl;
        cout<<"thr video contains rating of "<<rating<<endl;
        cout<<"length of the video is "<<videolength<<endl;
    }

};

class CWHtext:public CWH
{
    int words;

    public:
    CWHtext(string s, float r, int wc):CWH(s,r)
    {
        words=wc;
    }

    void display()
    {
        cout<<"this is an amazing text tutorial with title  "<<title<<endl;
        cout<<"the text contains rating of "<<rating<<endl;
        cout<<"length of the text is "<<words<<endl;
    }

};

int main()
{
    string title;
    float rating;
    int videolength,words;

    title="the title contains codewith harry";
    rating=4.56;
    words=56;
    CWHtext djtext(title,rating,words);
    djtext.display();

    title="the title of tutorial is cwh";
    rating=5.0;
    videolength=67;
    CWHvideo djvideo(title,rating,videolength);
    djvideo.display();

    CWH*ab[2];
    ab[0]=&djtext;
    ab[1]=&djvideo;
    ab[0]->display();
    ab[1]->display();
    return 0;
}