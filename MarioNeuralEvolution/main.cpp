#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(720, 500), "Super AI Bros.");
    sf::View view;
    view.setCenter(sf::Vector2f(360.f, 250.f));
    view.setSize(sf::Vector2f(720.f, 500.f));
    Agent agent(20, 20);
    agent.setPosition(sf::Vector2f(20, 20));
    Platform ground1(sf::Vector2f(2220, 40), sf::Vector2f(0, 400));
    Platform question1(sf::Vector2f(30, 30), sf::Vector2f(500, 300));
    Platform brick1(sf::Vector2f(30, 30), sf::Vector2f(620, 300));
    Platform question2(sf::Vector2f(30, 30), sf::Vector2f(650, 300));
    Platform brick2(sf::Vector2f(30, 30), sf::Vector2f(680, 300));
    Platform question3(sf::Vector2f(30, 30), sf::Vector2f(710, 300));
    Platform brick3(sf::Vector2f(30, 30), sf::Vector2f(740, 300));
    Platform question4(sf::Vector2f(30, 30), sf::Vector2f(680, 150));
    Platform pipe1(sf::Vector2f(60, 50), sf::Vector2f(860, 350));
    Platform pipe2(sf::Vector2f(60, 75), sf::Vector2f(1200, 325));
    Platform pipe3(sf::Vector2f(60, 100), sf::Vector2f(1540, 300));
    Platform pipe4(sf::Vector2f(60, 100), sf::Vector2f(1880, 300));
    Platform ground2(sf::Vector2f(450, 40), sf::Vector2f(2280, 400));
    Platform brick4(sf::Vector2f(30, 30), sf::Vector2f(2490, 300));
    Platform question5(sf::Vector2f(30, 30), sf::Vector2f(2520, 300));
    Platform brick5(sf::Vector2f(30, 30), sf::Vector2f(2550, 300));
    Platform brick6(sf::Vector2f(30, 30), sf::Vector2f(2580, 150));
    Platform brick7(sf::Vector2f(30, 30), sf::Vector2f(2610, 150));
    Platform brick8(sf::Vector2f(30, 30), sf::Vector2f(2640, 150));
    Platform brick9(sf::Vector2f(30, 30), sf::Vector2f(2670, 150));
    Platform brick10(sf::Vector2f(30, 30), sf::Vector2f(2700, 150));
    Platform brick11(sf::Vector2f(30, 30), sf::Vector2f(2730, 150));
    Platform brick12(sf::Vector2f(30, 30), sf::Vector2f(2760, 150));
    Platform brick13(sf::Vector2f(30, 30), sf::Vector2f(2790, 150));
    Platform ground3(sf::Vector2f(1890, 40), sf::Vector2f(2820, 400));
    Platform brick14(sf::Vector2f(30, 30), sf::Vector2f(2880, 150));
    Platform brick15(sf::Vector2f(30, 30), sf::Vector2f(2910, 150));
    Platform brick16(sf::Vector2f(30, 30), sf::Vector2f(2940, 150));
    Platform question6(sf::Vector2f(30, 30), sf::Vector2f(2970, 150));
    Platform brick17(sf::Vector2f(30, 30), sf::Vector2f(2970, 300));
    Platform brick18(sf::Vector2f(30, 30), sf::Vector2f(3150, 300));
    Platform brick19(sf::Vector2f(30, 30), sf::Vector2f(3180, 300));
    Platform question7(sf::Vector2f(30, 30), sf::Vector2f(3330, 300));
    Platform question8(sf::Vector2f(30, 30), sf::Vector2f(3420, 300));
    Platform question9(sf::Vector2f(30, 30), sf::Vector2f(3510, 300));
    Platform question10(sf::Vector2f(30, 30), sf::Vector2f(3420, 150));
    Platform brick20(sf::Vector2f(30, 30), sf::Vector2f(3690, 300));
    Platform brick21(sf::Vector2f(30, 30), sf::Vector2f(3780, 150));
    Platform brick22(sf::Vector2f(30, 30), sf::Vector2f(3810, 150));
    Platform brick23(sf::Vector2f(30, 30), sf::Vector2f(3840, 150));
    Platform brick24(sf::Vector2f(30, 30), sf::Vector2f(3990, 150));
    Platform question11(sf::Vector2f(30, 30), sf::Vector2f(4020, 150));
    Platform question12(sf::Vector2f(30, 30), sf::Vector2f(4050, 150));
    Platform brick25(sf::Vector2f(30, 30), sf::Vector2f(4080, 150));
    Platform brick26(sf::Vector2f(30, 30), sf::Vector2f(4020, 300));
    Platform brick27(sf::Vector2f(30, 30), sf::Vector2f(4050, 300));
    Platform stair1(sf::Vector2f(120, 30), sf::Vector2f(4170, 370));
    Platform stair2(sf::Vector2f(90, 30), sf::Vector2f(4200, 340));
    Platform stair3(sf::Vector2f(60, 30), sf::Vector2f(4230, 310));
    Platform stair4(sf::Vector2f(30, 30), sf::Vector2f(4260, 280));
    Platform stair5(sf::Vector2f(30, 30), sf::Vector2f(4320, 280));
    Platform stair6(sf::Vector2f(60, 30), sf::Vector2f(4320, 310));
    Platform stair7(sf::Vector2f(90, 30), sf::Vector2f(4320, 340));
    Platform stair8(sf::Vector2f(120, 30), sf::Vector2f(4320, 370));
    Platform stair9(sf::Vector2f(150, 30), sf::Vector2f(4560, 370));
    Platform stair10(sf::Vector2f(120, 30), sf::Vector2f(4590, 340));
    Platform stair11(sf::Vector2f(90, 30), sf::Vector2f(4620, 310));
    Platform stair12(sf::Vector2f(60, 30), sf::Vector2f(4650, 280));
    Platform ground4(sf::Vector2f(2000, 40), sf::Vector2f(4770, 400));
    Platform stair13(sf::Vector2f(30, 30), sf::Vector2f(4770, 280));
    Platform stair14(sf::Vector2f(60, 30), sf::Vector2f(4770, 310));
    Platform stair15(sf::Vector2f(90, 30), sf::Vector2f(4770, 340));
    Platform stair16(sf::Vector2f(120, 30), sf::Vector2f(4770, 370));
    Platform pipe5(sf::Vector2f(60, 50), sf::Vector2f(5010, 350));
    Platform brick28(sf::Vector2f(30, 30), sf::Vector2f(5160, 300));
    Platform brick29(sf::Vector2f(30, 30), sf::Vector2f(5190, 300));
    Platform question13(sf::Vector2f(30, 30), sf::Vector2f(5220, 300));
    Platform brick30(sf::Vector2f(30, 30), sf::Vector2f(5250, 300));
    Platform pipe6(sf::Vector2f(60, 50), sf::Vector2f(5490, 350));
    Platform stair17(sf::Vector2f(270, 30), sf::Vector2f(5550, 370));
    Platform stair18(sf::Vector2f(240, 30), sf::Vector2f(5580, 340));
    Platform stair19(sf::Vector2f(210, 30), sf::Vector2f(5610, 310));
    Platform stair20(sf::Vector2f(180, 30), sf::Vector2f(5640, 280));
    Platform stair21(sf::Vector2f(150, 30), sf::Vector2f(5670, 250));
    Platform stair22(sf::Vector2f(120, 30), sf::Vector2f(5700, 220));
    Platform stair23(sf::Vector2f(90, 30), sf::Vector2f(5730, 190));
    Platform stair24(sf::Vector2f(60, 30), sf::Vector2f(5760, 160));
    Platform flagbase(sf::Vector2f(30, 30), sf::Vector2f(6030, 370));
    Platform flagpole(sf::Vector2f(6, 250), sf::Vector2f(6042, 120));
    Platform flag(sf::Vector2f(50, 50), sf::Vector2f(5992, 120));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            agent.Jump();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            agent.MoveForward();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            agent.MoveBackward();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            agent.setPosition(sf::Vector2f(20, 400));
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
            view.move(-1.f, 0.f);
            window.setView(view);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
            view.setCenter(sf::Vector2f(360.f, 250.f));
            window.setView(view);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
            view.move(1.f, 0.f);
            window.setView(view);

        // Screen scrolling
        if ((window.mapCoordsToPixel(sf::Vector2f((agent.getPosition()->x), (agent.getPosition()->y))).x) > 300)
            view.move(1.f, 0.f);
            window.setView(view);
        
        // Screen could not scroll backward in original SMB1
        if ((window.mapCoordsToPixel(sf::Vector2f((agent.getPosition()->x), (agent.getPosition()->y))).x) < 1)
            agent.MoveForward();


        agent.Update();

        if (ground1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, ground1.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (question1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question1.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question1!\n");
        }

        if (brick1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick1.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick1.\n");
        }

        if (question2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question2.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a mushroom in question2!\n");
        }

        if (brick2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick2.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick2.\n");
        }

        if (question3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question3.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question3!\n");
        }

        if (brick3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick3.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick3.\n");
        }

        if (question4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question4.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question4!\n");
        }

        if (pipe1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe1.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (pipe2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe2.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (pipe3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe3.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (pipe4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe4.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (ground2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, ground2.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (brick4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick4.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick4.\n");
        }

        if (question5.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question5.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a mushroom in question5!\n");
        }

        if (brick5.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick5.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick5.\n");
        }

        if (brick6.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick6.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick6.\n");
        }

        if (brick7.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick7.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick7.\n");
        }

        if (brick8.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick8.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick8.\n");
        }

        if (brick9.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick9.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick9.\n");
        }

        if (brick10.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick10.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick10.\n");
        }

        if (brick11.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick11.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick11.\n");
        }

        if (brick12.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick12.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick12.\n");
        }

        if (brick13.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick13.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick13.\n");
        }

        if (ground3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, ground3.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (brick14.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick14.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick14.\n");
        }

        if (brick15.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick15.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick15.\n");
        }

        if (brick16.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick16.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick16.\n");
        }

        if (question6.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question6.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question6!\n");
        }

        if (brick17.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick17.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in brick17!\n");
        }

        if (brick18.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick18.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick18.\n");
        }

        if (brick19.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick19.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a star in brick19!\n");
        }

        if (question7.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question7.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question7!\n");
        }

        if (question8.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question8.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question8!\n");
        }

        if (question9.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question9.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question9!\n");
        }

        if (question10.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question10.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a mushroom in question10!\n");
        }

        if (brick20.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick20.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick20.\n");
        }

        if (brick21.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick21.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick21.\n");
        }

        if (brick22.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick22.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick22.\n");
        }

        if (brick23.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick23.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick23.\n");
        }

        if (brick24.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick24.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick24.\n");
        }

        if (question11.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question11.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question11!\n");
        }

        if (question12.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question12.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question12!\n");
        }

        if (brick25.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick25.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick25.\n");
        }

        if (brick26.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick26.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick26.\n");
        }

        if (brick27.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick27.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick27.\n");
        }

        if (stair1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair1.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair2.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair3.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair4.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair5.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair5.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair6.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair6.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair7.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair7.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair8.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair8.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair9.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair9.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair10.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair10.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair11.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair11.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair12.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair12.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (ground4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, ground4.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair13.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair13.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair14.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair14.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair15.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair15.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair16.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair16.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (pipe5.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe5.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (brick28.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick28.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick28.\n");
        }
        if (brick29.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick29.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick29.\n");
        }
        if (question13.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question13.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question13!\n");
        }
        if (brick30.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick30.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick30.\n");
        }

        if (pipe6.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe6.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair17.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair17.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair18.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair18.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair19.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair19.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair20.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair20.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair21.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair21.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair22.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair22.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair23.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair23.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (stair24.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, stair24.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (flagbase.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, flagbase.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (flagpole.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(20, 400));
            agent.getAcceleration()->y = 0;
            view.setCenter(sf::Vector2f(360.f, 250.f));
            window.setView(view);
        }

        window.clear();
        agent.Draw(&window);
        ground1.Draw(&window);
        question1.Draw(&window);
        brick1.Draw(&window);
        question2.Draw(&window);
        brick2.Draw(&window);
        question3.Draw(&window);
        brick3.Draw(&window);
        question4.Draw(&window);
        pipe1.Draw(&window);
        pipe2.Draw(&window);
        pipe3.Draw(&window);
        pipe4.Draw(&window);
        ground2.Draw(&window);
        brick4.Draw(&window);
        question5.Draw(&window);
        brick5.Draw(&window);
        brick6.Draw(&window);
        brick7.Draw(&window);
        brick8.Draw(&window);
        brick9.Draw(&window);
        brick10.Draw(&window);
        brick11.Draw(&window);
        brick12.Draw(&window);
        brick13.Draw(&window);
        ground3.Draw(&window);
        brick14.Draw(&window);
        brick15.Draw(&window);
        brick16.Draw(&window);
        question6.Draw(&window);
        brick17.Draw(&window);
        brick18.Draw(&window);
        brick19.Draw(&window);
        question7.Draw(&window);
        question8.Draw(&window);
        question9.Draw(&window);
        question10.Draw(&window);
        brick20.Draw(&window);
        brick21.Draw(&window);
        brick22.Draw(&window);
        brick23.Draw(&window);
        brick24.Draw(&window);
        question11.Draw(&window);
        question12.Draw(&window);
        brick25.Draw(&window);
        brick26.Draw(&window);
        brick27.Draw(&window);
        stair1.Draw(&window);
        stair2.Draw(&window);
        stair3.Draw(&window);
        stair4.Draw(&window);
        stair5.Draw(&window);
        stair6.Draw(&window);
        stair7.Draw(&window);
        stair8.Draw(&window);
        stair9.Draw(&window);
        stair10.Draw(&window);
        stair11.Draw(&window);
        stair12.Draw(&window);
        ground4.Draw(&window);
        stair13.Draw(&window);
        stair14.Draw(&window);
        stair15.Draw(&window);
        stair16.Draw(&window);
        pipe5.Draw(&window);
        brick28.Draw(&window);
        brick29.Draw(&window);
        question13.Draw(&window);
        brick30.Draw(&window);
        pipe6.Draw(&window);
        stair17.Draw(&window);
        stair18.Draw(&window);
        stair19.Draw(&window);
        stair20.Draw(&window);
        stair21.Draw(&window);
        stair22.Draw(&window);
        stair23.Draw(&window);
        stair24.Draw(&window);
        flagbase.Draw(&window);
        flagpole.Draw(&window);
        flag.Draw(&window);
        window.display();
    }
    return 0;
}