#include <piece.h>

using namespace std;

const char * const Piece::white_piece_symbols[] = {
    [KING] = "♚",
    [QUEEN] = "♛",
    [ROOK] = "♜",
    [KNIGHT] = "♞",
    [BISHOP] = "♝",
    [PAWN] = "♟︎"
};

const char * const Piece::black_piece_symbols[] = {
    [KING] = "♔",
    [QUEEN] = "♕",
    [ROOK] = "♖",
    [KNIGHT] = "♘",
    [BISHOP] = "♗",
    [PAWN] = "♙"
};

const char * Piece::empty_symbol = "🨢";

Piece::Piece(piece_type type)
{
    this->type = type;
    this->everMoved = false;
}

Piece::Piece(Piece *toBeCopied)
{
    this->type = toBeCopied->type;
    this->everMoved = toBeCopied->everMoved;
    this->color = toBeCopied->color;
}

/**
 * Will get overriden
*/
Piece* Piece::clone()
{
    return NULL;
}

Piece* Piece::black()
{
    this->color = BLACK;
    return this;
}

Piece* Piece::white()
{
    this->color = WHITE;
    return this;
}

bool Piece::isBlack()
{
    return this->color == BLACK;
}

bool Piece::isWhite()
{
    return this->color == WHITE;
}

piece_color Piece::getColor()
{
    return this->color;
}

char * Piece::getSymbol()
{
    char * symbol;

    if (this->isWhite()){
        symbol = (char*)malloc(sizeof(white_piece_symbols[this->type]));
        if (NULL == symbol){ cout << "malloc error - [1]"; return NULL; }
        memcpy(symbol, white_piece_symbols[this->type], sizeof(white_piece_symbols[this->type]));
    }else if (this->isBlack()){
        symbol = (char*)malloc(sizeof(black_piece_symbols[this->type]));
        if (NULL == symbol){ cout << "malloc error - [1]"; return NULL; }
        memcpy(symbol, black_piece_symbols[this->type], sizeof(black_piece_symbols[this->type]));
    }else{
        cout << "Piece color error" << endl;
        return NULL;
    }

    return symbol;
}  

bool Piece::hasEverMoved(){
    return this->everMoved;
}

void Piece::setEverMovedTrue(){
    this->everMoved = true;
}

/**
 * Will get overriden
*/
bool Piece::validateMovement(Board * board, position initial_position,  position final_position){
    return false;
}

bool Piece::isKing(){
    return this->type == KING;
}


King::King():Piece(KING){};
bool King::validateMovement(Board * board, position initial_position,  position final_position){
    int dx = final_position.x - initial_position.x;
    int dy = final_position.y - initial_position.y;

    if (abs(dx) > 1 || abs(dy) > 1 || dx == 0 && dy == 0) { return false; }

    if (board->friendlyInPosition(this->getColor(), final_position)) { return false; }

    return true;
}
Piece* King::clone()
{
    Piece *piece = this->isWhite() ? (new King())->white() : (new King())->black();
    if (this->hasEverMoved()) 
        piece->setEverMovedTrue();
}


Queen::Queen():Piece(QUEEN){};
bool Queen::validateMovement(Board * board, position initial_position,  position final_position){
    int dx = final_position.x - initial_position.x;
    int dy = final_position.y - initial_position.y;

    if (board->friendlyInPosition(this->getColor(), final_position)) { return false; }

    Piece *auxRook = (this->isWhite()) ? (new Piece(ROOK))->white() : (new Piece(ROOK))->black(); 
    Piece *auxBishop = (this->isWhite()) ? (new Piece(BISHOP))->white() : (new Piece(BISHOP))->black(); 
    
    if (
        auxRook->validateMovement(board, initial_position, final_position) || 
        auxBishop->validateMovement(board, initial_position, final_position)
    ){
        delete auxBishop;
        delete auxRook;
        return true;
    }

    delete auxBishop;
    delete auxRook;
    return false;
}
Piece* Queen::clone()
{
    Piece *piece = this->isWhite() ? (new Queen())->white() : (new Queen())->black();
    if (this->hasEverMoved()) 
        piece->setEverMovedTrue();
}


Rook::Rook():Piece(ROOK){};
bool Rook::validateMovement(Board * board, position initial_position,  position final_position){
    int dx = final_position.x - initial_position.x;
    int dy = final_position.y - initial_position.y;

    if (board->friendlyInPosition(this->getColor(), final_position)) { return false; }

    if (dx > 0 && dy == 0){
        for (int x = initial_position.x + 1; x < final_position.x; x++){
            if (board->pieceInPositionExists(position{.x = x, .y = final_position.y})){ return false; }
        }
        return true;
    }else if (dx < 0 && dy == 0){
        for (int x = initial_position.x - 1; x > final_position.x; x--){
            if (board->pieceInPositionExists(position{.x = x, .y = final_position.y})){ return false; }
        }
        return true;
    }else if (dy > 0 && dx == 0){
        for (int y = initial_position.y + 1; y < final_position.y; y++){
            if (board->pieceInPositionExists(position{.x = final_position.x, .y = y})){ return false; }
        }
        return true;
    }else if (dy < 0 && dx == 0){
        for (int y = initial_position.y - 1; y > final_position.y; y--){
            if (board->pieceInPositionExists(position{.x = final_position.x, .y = y})){ return false; }
        }
        return true;
    }
    
    return false;
}
Piece* Rook::clone()
{
    Piece *piece = this->isWhite() ? (new Rook())->white() : (new Rook())->black();
    if (this->hasEverMoved()) 
        piece->setEverMovedTrue();
}


Knight::Knight():Piece(KNIGHT){};
bool Knight::validateMovement(Board * board, position initial_position,  position final_position){
    int dx = final_position.x - initial_position.x;
    int dy = final_position.y - initial_position.y;

    if (dx == 0 || dy == 0) { return false; }

    if (abs(dx) + abs(dy) == 3) { return true; }

    return false;
}
Piece* Knight::clone()
{
    Piece *piece = this->isWhite() ? (new Knight())->white() : (new Knight())->black();
    if (this->hasEverMoved()) 
        piece->setEverMovedTrue();
}


Bishop::Bishop():Piece(BISHOP){};
bool Bishop::validateMovement(Board * board, position initial_position,  position final_position){
    int dx = final_position.x - initial_position.x;
    int dy = final_position.y - initial_position.y;
    
    // se modulo de dx e dy sao iguais (diagonal), e a peça se moveu, prossegue
    if (abs(dx) != abs(dy) || dx == 0 || dy == 0) { return false; }
    
    // verificar se na posição final existe peça amiga
    if (board->friendlyInPosition(this->getColor(), final_position)) { return false; }

    // checar se há peças até uma casa antes da posição final
    for (int di = 1; di < abs(dx); di++){
        int i_pos_x = dx > 0 ? initial_position.x + di : initial_position.x - di;
        int i_pos_y = dy > 0 ? initial_position.y + di : initial_position.y - di;
        if (board->pieceInPositionExists(position{.x = i_pos_x, .y = i_pos_y})) { return false; }
    }    

    return true;
}
Piece* Bishop::clone()
{
    Piece *piece = this->isWhite() ? (new Bishop())->white() : (new Bishop())->black();
    if (this->hasEverMoved()) 
        piece->setEverMovedTrue();
}


Pawn::Pawn():Piece(PAWN){};
bool Pawn::validateMovement(Board * board, position initial_position,  position final_position){
    int dx = final_position.x - initial_position.x;
    int dy = final_position.y - initial_position.y;

    // se movimentar 1 casa para frente, nao pode ter peça
    if (dy == (this->isWhite() ? 1 : -1) && dx == 0 && !board->pieceInPositionExists(final_position)) { return true; }

    // se movimentar 2 casas para frente, nao pode ter peça na primeira nem na segunda casa e tem que ser o primeiro lance do peao
    if (dy == (this->isWhite() ? 2 : -2) && dx == 0 && 
        !board->pieceInPositionExists(position{.x = final_position.x, .y = final_position.y + (this->isWhite() ? -1 : 1)}) &&
        !board->pieceInPositionExists(final_position) &&
        !this->hasEverMoved()
    ) { return true; }

    // se movimentar com dy == 1 e dx == +- 1 e na posição final existir um inimigo, então é valido (captura)
    if (dy == (this->isWhite() ? 1 : -1) && abs(dx) == 1 && board->opponentInPosition(this->getColor(), final_position)) { return true; }
    
    // Neste caso, o movimento nao se encaixou em nenhum padrão válido.
    return false; 

}
Piece* Pawn::clone()
{
    Piece *piece = this->isWhite() ? (new Pawn())->white() : (new Pawn())->black();
    if (this->hasEverMoved()) 
        piece->setEverMovedTrue();
}