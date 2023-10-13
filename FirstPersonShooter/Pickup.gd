extends Area

enum PickupType {
	Health,
	Ammo
}

# stats
export(PickupType) var type = PickupType.Health
export var amount : int = 10

# bobbing
onready var startYPos : float = translation.y
var bobHeight : float = 1.0
var bobSpeed : float = 1.0
var bobbingUp : bool = true
