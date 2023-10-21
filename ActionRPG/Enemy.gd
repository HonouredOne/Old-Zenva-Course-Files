extends KinematicBody

var curHp : int = 3
var maxHp : int = 3

var damage : int = 1
var attackDist : float = 1.5
var attackRate : float = 1.0
var gravity : float = 15.0

var moveSpeed : float = 2.5

var vel = Vector3()

onready var timer = get_node("Timer")
onready var player = get_node("/root/MainScene/Player")

func _ready():
	
	timer.wait_time = attackRate
	timer.start()

func _on_Timer_timeout():
	
	if translation.distance_to(player.translation) <= attackDist:
		player.take_damage(damage)

func _physics_process(delta):
	
	var dist = translation.distance_to(player.translation)
	
	if dist > attackDist:
		var dir = (player.translation - translation).normalized()
		
		vel.x = dir.x * moveSpeed
		vel.y -= gravity * delta
		vel.z = dir.z * moveSpeed
		
		vel = move_and_slide(vel, Vector3.UP)

func take_damage(damageToTake):
	
	curHp -= damageToTake
	
	if curHp <= 0:
		die()

func die():
	
	queue_free()
