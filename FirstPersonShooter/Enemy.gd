extends KinematicBody

# stats
var health : int = rand_range(1.0, 5.0)
onready var moveSpeed : float = rand_range(1.0, 2.0)

# attacking
onready var damage  : float = rand_range(0.25, 1.0)
onready var attackRate : float = rand_range(0.25, 1.5)
var attackDist : float = 2.0

onready var scoreToGive : int = rand_range(1.0, 10.0)

# components
onready var player : Node = get_node("/root/MainScene/Player")
onready var timer : Timer = get_node("Timer")

func _ready():
	
	# setup the timer
	timer.set_wait_time(attackRate)
	timer.start()

func _physics_process(_delta):
	
	# calculate the direction to the player
	var dir = (player.translation - translation).normalized()
	dir.y = 0
	
	# move the enemy towards the player
	if translation.distance_to(player.translation) > attackDist:
		move_and_slide(dir * moveSpeed, Vector3.UP)

func take_damage(damage):
	
	health -= damage
	
	if health <= 0:
		die()

func die():
	
	player.add_score(scoreToGive)
	queue_free()

func attack():
	
	player.take_damage(damage)


func _on_Timer_timeout():
	
	if translation.distance_to(player.translation) <= attackDist:
		attack()
