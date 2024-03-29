extends Area2D

#is this the starting tile?
# a Base building will be placed here at the start of the game
export var startTile : bool = false

# do we have a building on this tile?
var hasBuilding : bool = false

# can we place a building on this tile?
var canPlaceBuilding : bool = false

# components
onready var highlight : Sprite = get_node("Highlight")
onready var buildingIcon : Sprite = get_node("BuildingIcon")

# called once when the node is initialized
func _ready():
	
	# add the tile to the "Tiles" group when the node is initialized
	add_to_group("Tiles")

# turns on or off the green highlight
func toggle_highlight (toggle):
	
	highlight.visible = toggle
	canPlaceBuilding = toggle

# called when a building is placed on the tile
# sets the tile's building texture to display it
func place_building (buildingTexture):
	
	hasBuilding = true
	buildingIcon.texture = buildingTexture

# called when an input event takes place on the tile
func _on_Tile_input_event(viewport, event, shape_idx):
	
	if event is InputEventMouseButton and event.pressed:
		var gameManager = get_node("/root/MainScene")
		
		if gameManager.currentlyPlacingBuilding and canPlaceBuilding:
			gameManager.place_building(self)
