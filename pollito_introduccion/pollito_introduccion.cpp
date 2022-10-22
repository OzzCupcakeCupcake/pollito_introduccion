#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 500), "SFML works!");
    sf::CircleShape cabezita(100.f);
    sf::CircleShape ojitoLeft(10.f);
    sf::CircleShape ojitoRight(10.f);
    sf::CircleShape pico(20, 3);
    sf::CircleShape chapeteLeft(15.f);
    sf::CircleShape chapeteRight(15.f);
    sf::CircleShape cuerpo(150.f);

    // Pata derecha
    sf::RectangleShape pataDerechaFemur(sf::Vector2f{ 5.f, 100.f });
    sf::RectangleShape dedoDerecho1(sf::Vector2f{ 5.f, 20.f });
    sf::RectangleShape dedoDerecho2(sf::Vector2f{ 5.f, 20.f });

    // Pata izquierda
    sf::RectangleShape pataIzquierdaFemur(sf::Vector2f{ 5.f, 100.f });

    cabezita.setFillColor(sf::Color::Yellow);
    cabezita.setPosition(sf::Vector2f{ 200, 0 });
    cabezita.setOutlineThickness(1.f);
    cabezita.setOutlineColor(sf::Color::Black);

    ojitoLeft.setFillColor(sf::Color::Black);
    ojitoLeft.setPosition(sf::Vector2f{ 250,50 });

    ojitoRight.setFillColor(sf::Color::Black);
    ojitoRight.setPosition(sf::Vector2f{ 340,120 });

    pico.setFillColor(sf::Color::Color(255, 140, 0));
    pico.setPosition(sf::Vector2f{ 260, 120 });
    pico.setRotation(-20);

    chapeteLeft.setFillColor(sf::Color::Color(250, 218, 221));
    chapeteLeft.setPosition(sf::Vector2f{ 230, 70 });

    chapeteRight.setFillColor(sf::Color::Color(250, 218, 221));
    chapeteRight.setPosition(sf::Vector2f{ 320, 140 });

    cuerpo.setFillColor(sf::Color::Yellow);
    cuerpo.setPosition(sf::Vector2f{ 50, 100 });

    // Pata derecha
    pataDerechaFemur.setFillColor(sf::Color::Color(255, 140, 0));
    pataDerechaFemur.setPosition(sf::Vector2f{ 200, 400 });
    dedoDerecho1.setFillColor(sf::Color::Color(255, 140, 0));
    dedoDerecho1.rotate(45.f);
    dedoDerecho1.setPosition(sf::Vector2f{ 200, 480 });
    dedoDerecho2.setFillColor(sf::Color::Color(255, 140, 0));
    dedoDerecho2.rotate(-45.f);
    dedoDerecho2.setPosition(sf::Vector2f{ 200, 483 });

    // Pata izquierda
    pataIzquierdaFemur.setFillColor(sf::Color::Color(255, 140, 0));
    pataIzquierdaFemur.setPosition(sf::Vector2f{ 60, 300 });
    pataIzquierdaFemur.setRotation(60);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cuerpo);
        window.draw(cabezita);
        window.draw(ojitoLeft);
        window.draw(ojitoRight);
        window.draw(pico);
        window.draw(chapeteLeft);
        window.draw(chapeteRight);
        window.draw(pataDerechaFemur);
        window.draw(dedoDerecho1);
        window.draw(dedoDerecho2);
        window.draw(pataIzquierdaFemur);
        window.display();
    }

    return 0;
}