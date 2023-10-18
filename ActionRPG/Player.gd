extends KinematicBody

var curHp : int = 10
var maxHp : int = 10
var damage : int = 1

var gold : int = 0

var attackRate : float = 0.3
var lastAttackTime : int = 0

var moveSpeed : float = 5.0
var jumpForce : float = 10.0
var gravity : float = 15.0

var vel : Vector3 = Vector3()

onready var camera = get_node("CameraOrbit")
onready var attackRayCast = get_node("AttackRayCast")
