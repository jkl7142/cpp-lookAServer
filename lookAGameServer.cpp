#include "lookAGameServer.h"

using namespace std;

class lookAGameServer {
    class Room {
        // �� ���ӹ� ���� �����͵��� ��ȣ�Ѵ�.
        CriticalSection m_critSec;
        string m_roomName;
        list<Player> m_players;
        list<Character> m_characters;
    };

    map<PlayerID, shared_ptr<Room>> m_roomList;
    string m_serverName;

    // ���� ���ΰ� �� ����� ��ȣ�Ѵ�.
    // �� �� ���� �����ʹ� ��ȣ���� �ʴ´�.
    CriticalSection m_critSec;
};