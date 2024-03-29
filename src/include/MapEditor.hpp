#ifndef __MAPEDITOR_HPP__
#define __MAPEDITOR_HPP__

#include <SFML/Graphics.hpp>
#include "Map.hpp"
#include "MapEditorModel.hpp"
#include "MapView.hpp"
#include "EditMode.hpp"

class MapEditor {
private:
    Map &m_map;
    MapView &m_mapView;
    sf::Vector2f m_oldMousePos;
    bool m_isCtrlDown;
    bool m_isShiftDown;
public:
    MapEditorModel &m_editorModel;
    MapEditor(Map &t_map, MapEditorModel &t_model, MapView &t_mapView);
    void handleEvent(const sf::RenderWindow &t_window, sf::Event &t_event);
    ~MapEditor();
    sf::Vector2f getMousePos() const;
};

#endif // __MAPEDITOR_HPP__
