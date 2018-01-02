#include <fcntl.h>
#include "piece.h"
#include "position.h"
#include "ui.h"

int main()
{
    Position* position = new Position();
    UI* ui = new UI(position);

    ui -> DrawBoard();
    Move newMove = ui->GiveOpponentMove();
    position->UpdatePosition(&newMove);
    std::cout << std::endl; // std::wcout ??
    ui -> DrawBoard();

    return 0;
}
