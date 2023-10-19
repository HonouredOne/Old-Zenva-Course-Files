extends Area

export var goldToGive : int = 1
var rotateSpeed : float = 5.0

onready var initialYPos : float = translation.y
var bobHeight : float = 0.5
var bobSpeed : float = 1.5
var bobbingUp = true

func _process(delta):
	
	rotate_y(rotateSpeed * delta)
	
	translation.y += (bobSpeed if bobbingUp else -bobSpeed) * delta
	
	if bobbingUp and translation.y > initialYPos + bobHeight:
		bobbingUp = false
	elif !bobbingUp and translation.y < initialYPos - (bobHeight / 2):
		bobbingUp = true

func _on_GoldCoin_body_entered(body):
	
	if body.name == "Player":
		body.give_gold(goldToGive)
		queue_free()
