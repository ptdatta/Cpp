#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() =0;   // do-nothing function -->pure virtual function
};
class CWHvideo : public CWH
{
    int videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title" << title << endl;
        cout << "ratings: " << rating << " out of 5" << endl;
        cout << "length of this video is " << videolength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title " << title << endl;
        cout << "ratings: " << rating << " out of 5" << endl;
        cout << "number of words in this tutorial " << words << " words" << endl;
    }
};
int main()  
{
    string title;
    float rating, vlen;
    int words;

    //for CWH videos
    title = " django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    //djvideo.display();

    //for CWH text
    title = " django tutorial text";
    words = 433;
    rating = 4.19;
    CWHtext djtext(title, rating, words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

