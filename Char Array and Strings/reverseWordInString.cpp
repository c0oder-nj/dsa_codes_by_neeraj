#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    string s;
    stack<string> st;
    getline(cin, s);
    cout << s.length() << endl;

    string word;

    stringstream ss(s); // creating a stream called ss with our input string
    // now we can read words directly from this input string

    while (ss >> word)
    {
        st.push(word);
    }

    string result = "";
    string top_word;

    while (!st.empty())
    {
        top_word = st.top();
        st.pop();
        if (st.empty())
        {
            result += top_word;
        }else{
            result += top_word;
            result += " ";
        }
    }

    // result[result.length() - 1] = '\0';

    cout << result << " " << result.length() << endl;

    return 0;
}