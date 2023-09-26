extends KinematicBody

# stats
var curHp : int = 10
var maxHp : int = 10
var ammo : int = 15
var score : int = 0

# physics
var moveSpeed : float = 5.0
var jumpForce : float = 5.0
var gravity : float = 12.0

# cam look
var minLookAngle : float = -90.0
var maxLookAngle : float = 90.0
var lookSensitivity : float = 10

# vectors
var vel : Vector3 = Vector3()
var mouseDelta : Vector2 = Vector2()

# components
onready var camera : Camera = get_node("Camera")
onready var muzzle : Spatial = get_node("Camera/Muzzle")

func _physics_process(delta):
