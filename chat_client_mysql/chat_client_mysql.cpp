#include <string>
#include <fstream>
#include "routine.cpp"

int main()
{
    /*
#ifdef _WIN32
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Failed to initialize Winsock" << std::endl;
        return 1;
    }
#endif

    std::cout << "CLIENT IS ESTABLISHING A CONNECTION WITH SERVER THROUGH PORT: " << PORT << std::endl;
    users.read_from_file("users.txt"); // �������� ���������� ������������� ��� ���������� ������
    std::filesystem::create_directory("C:\\ChatUsers"); // �������� ���������� ��� ����� �������� �������� ���������� � ������ �����

    std::cout << "List of users:\n";
    std::cout << users;

    system("pause");

    main_loop();*/

    main_client_loop();

    return 0;
}