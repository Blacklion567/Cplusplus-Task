#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    stack<int> forMyStack;
    queue<int> forMyQueue;
    int choice, data;


    // while loop iyang i run ang code sa sulod if true or naa sa choices imung gi pili then mo out siya og tan awun nasad imung gi pili if naa sa choices
    //  after iya nasad tan-awun ang code usab hantud sa imung pili-on ang code IDK if sakto ba pag explain nku but mao na siya akung na sabtan sa while loop.
    while (true) {
            //  Pili kah isa sa mga Choices dra sa Menu.
            //#caution If mo butang kag any value for example Alphabet or symbol mo error siya.
        cout << "Menu:" << endl;
        cout << "1. Push-data for (stack)" << endl;
        cout << "2. Enqueue-data for (queue)" << endl;
        cout << "3. Pop-data from the (stack)" << endl;
        cout << "4. Dequeue-data from the (queue)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice) {
            case 1:    // #1 Push ka og data dri for Stack.
                cout << "Enter data for 'Push-data for (stack):' ";
                cin >> data;
                forMyStack.push(data);
                cout << "Data " << data << " pushed onto the stack." << endl;
                break;

            case 2:    // #2 Push ka og data dri for Queue.
                cout << "Enter data for 'Enqueue-data for (queue):' ";
                cin >> data;
                forMyQueue.push(data);
                cout << "Data " << data << " enqueued in the queue." << endl;
                break;

            case 3: // #3 If  imo ning gi pili ang mo pop out imung gi butang sa stack tungond sa forMyStack.top() og sa forMyStack.pop()
                if (!forMyStack.empty()) {
                    data = forMyStack.top();
                    forMyStack.pop();
                    cout << "Data " << data << " popped from the stack." << endl;
                }
                // if wlay value or wla kay gi Stack na value so else iyang i execute which is 'Stack is empty'.
                else {
                    cout << "Stack is empty." << endl;
                }
                break;

            case 4:   // #4 If  imo ning gi pili ang mo pop out imung gi butang sa queue tungond sa forMyQueue.top() og sa forMyQueue.pop()
                if (!forMyQueue.empty()) {
                    data = forMyQueue.front();
                    forMyQueue.pop();
                    cout << "Data " << data << " dequeued from the queue." << endl;
                }
                // if wlay value or wla kay gi Queue na value so else iyang i execute which is 'Queue is empty'.
                else {
                    cout << "Queue is empty." << endl;
                }
                break;

            case 5:   // if Exit #5 imung gi pili so mo return 0 siya which is end the program.
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
