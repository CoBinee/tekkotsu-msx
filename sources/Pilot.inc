; Pilot.inc : �p�C���b�g
;


; �}�N���̒�`
;

; ���
PILOT_STATE_NULL        =   0x00
PILOT_STATE_START       =   0x10
PILOT_STATE_WALK_RIGHT  =   0x20
PILOT_STATE_WALK_LEFT   =   0x21
PILOT_STATE_TURN_RIGHT  =   0x30
PILOT_STATE_TURN_LEFT   =   0x31
PILOT_STATE_KILL        =   0xf0

; �͈�
PILOT_RANGE_LEFT        =   0x00
PILOT_RANGE_TOP         =   0x01
PILOT_RANGE_RIGHT       =   0x02
PILOT_RANGE_BOTTOM      =   0x03
PILOT_RANGE_SIZE        =   0x04

; �O���֐��錾
;

    .globl  _PilotInitialize
    .globl  _PilotReset
    .globl  _PilotUpdate
    .globl  _PilotRender

; �O���ϐ��錾
;

    .globl  _pilotState
    .globl  _pilotTurn
    .globl  _pilotRange