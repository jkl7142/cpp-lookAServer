#include "lookAGameServer.h"

using namespace std;

class lookAGameServer {
    class Room {
        // 각 게임방 안의 데이터들을 보호한다.
        CriticalSection m_critSec;
        string m_roomName;
        list<Player> m_players;
        list<Character> m_characters;
    };

    map<PlayerID, shared_ptr<Room>> m_roomList;
    string m_serverName;

    // 서버 메인과 방 목록을 보호한다.
    // 단 방 안의 데이터는 보호하지 않는다.
    CriticalSection m_critSec;
};