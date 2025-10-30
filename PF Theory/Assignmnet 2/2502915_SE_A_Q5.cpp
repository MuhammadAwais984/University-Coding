#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer;

    cout << "Starting General Diagnosis Program.\n";
    cout << "Recording symptoms information – DONE.\n";
    cout << "Rebooting server to see if condition still exists – DONE.\n";

    cout << "Is this a newly installed server? (yes/no): ";
    cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "y" || answer == "Y")
    {
        cout << "Please reseat any components that may have come loose during shipping – DONE.\n";
        cout << "Rebooting the server – DONE.\n";
        cout << "Does the condition still exist? (yes/no): ";
        cin >> answer;
        if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
        {
            cout << "Recording all actions taken for future – DONE.\n";
            cout << "Congratulations, your server problems are solved.\n";
            return 0;
        }
    }

    cout << "Were options added or was the configuration changed recently? (yes/no): ";
    cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "y" || answer == "Y")
    {
        cout << "Isolating what has changed and verifying installation – DONE.\n";
        cout << "Restoring server to last known working state – DONE.\n";
        cout << "Does the condition still exist? (yes/no): ";
        cin >> answer;

        if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
        {
            cout << "Recording all actions taken for future – DONE.\n";
            cout << "Congratulations, your server problems are solved.\n";
        }
        else
        {
            cout << "Isolate and minimize the memory configuration – DONE.\n";
            cout << "Does the condition still exist? (yes/no): ";
            cin >> answer;

            if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
            {
                cout << "Recording all actions taken for future – DONE.\n";
                cout << "Congratulations, your server problems are solved.\n";
            }
            else
            {
                cout << "Break server down to minimal configuration – DONE.\n";
                cout << "Does the condition still exist? (yes/no): ";
                cin >> answer;

                if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
                {
                    cout << "Add one part at a time back to configuration to isolate faulty component.\n";
                    cout << "Does the condition still exist? (yes/no): ";
                    cin >> answer;
                    if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
                    {
                        cout << "Recording all actions taken for future – DONE.\n";
                        cout << "Congratulations, your server problems are solved.\n";
                    }
                    else
                    {
                        cout << "Ensure the following information is available:\n";
                        cout << "Survey configuration snapshots.\n";
                        cout << "OS event log file .\n";
                        cout << "Full crash dump .\n";
                        cout << " Call HP Service Provider – DONE.\n";
                        cout << "End of Diagnosis.\n";
                    }
                }
                else
                {
                    cout << "Trouble shooting or replace basic server parts.\n";
                    cout << "Does the condition still exist? (yes/no): ";
                    cin >> answer;
                    if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
                    {
                        cout << "Recording all actions taken for future – DONE.\n";
                        cout << "Congratulations, your server problems are solved.\n";
                    }
                    else
                    {
                        cout << "Ensure the following information is available:\n";
                        cout << "Survey configuration snapshots.\n";
                        cout << "OS event log file .\n";
                        cout << "Full crash dump .\n";
                        cout << " Call HP Service Provider – DONE.\n";
                        cout << "End of Diagnosis.\n";
                    }
                }
            }
        }
    }
    else
    {
        cout << "Checking for Service Notifications – DONE.\n";
        cout << "Downloading the latest software and firmware from HP website – DONE.\n";
        cout << "Does the condition still exist? (yes/no): ";
        cin >> answer;

        if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
        {
            cout << "Recording all actions taken for future – DONE.\n";
            cout << "Congratulations, your server problems are solved.\n";
        }
        else
        {
            cout << "Isolate and minimize the memory configuration – DONE.\n";
            cout << "Does the condition still exist? (yes/no): ";
            cin >> answer;

            if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
            {
                cout << "Recording all actions taken for future – DONE.\n";
                cout << "Congratulations, your server problems are solved.\n";
            }
            else
            {
                cout << "Break server down to minimal configuration – DONE.\n";
                cout << "Does the condition still exist? (yes/no): ";
                cin >> answer;

                if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
                {
                    cout << "Add one part at a time back to configuration to isolate faulty component.\n";
                    cout << "Does the condition still exist? (yes/no): ";
                    cin >> answer;
                    if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
                    {
                        cout << "Recording all actions taken for future – DONE.\n";
                        cout << "Congratulations, your server problems are solved.\n";
                    }
                    else
                    {
                        cout << "Ensure the following information is available:\n";
                        cout << "Survey configuration snapshots.\n";
                        cout << "OS event log file .\n";
                        cout << "Full crash dump .\n";
                        cout << " Call HP Service Provider – DONE.\n";
                        cout << "End of Diagnosis.\n";
                    }
                }
                else
                {
                    cout << "Trouble shooting or replace basic server parts.\n";
                    cout << "Does the condition still exist? (yes/no): ";
                    cin >> answer;
                    if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
                    {
                        cout << "Recording all actions taken for future – DONE.\n";
                        cout << "Congratulations, your server problems are solved.\n";
                    }
                    else
                    {
                        cout << "Ensure the following information is available:\n";
                        cout << "Survey configuration snapshots.\n";
                        cout << "OS event log file .\n";
                        cout << "Full crash dump .\n";
                        cout << " Call HP Service Provider – DONE.\n";
                        cout << "End of Diagnosis.\n";
                    }
                }
            }
        }
    }

    return 0;
}
