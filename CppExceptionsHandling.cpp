void funcException(vector<int>& vectorQ) {

    try {
        int index;
        cout << "Enter the index : " << " ";
        cin >> index;
        if (index < 0) {
            throw "negative index ; ";
        }
        else if (index > vectorQ.size()) {
            throw index;
        }

        for (int i = 0; i < index; i++) {
            cout << vectorQ[i] << " ";
        }
    }

    catch (const char* message2) {
        cout << "Exception 2 : " << message2;
    }

    catch (int message1) {
        cout << "Exception 1 : " << message1 << " out of the range";
    }
}

int main()
{
    vector<int>vectorQ = { 1,2,3,4,5,6,8,9,10 };
    funcException(vectorQ);
}
