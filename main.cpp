#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:  Fish
//  action 1: the fish swims
fish.swim();
//  action 2: the fish blows bubbles
fish.blowBubble();
//  action 3: the fish eats food
fish.eatFood();
//  2)
//  Noun:  Cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat chases the mouse
cat.chaseMouse();
//  action 3: the cat drinks milk
cat.drinkMilk();
//  3)
//  Noun:  Baby
//  action 1: the baby cries
baby.cry();
//  action 2: the baby falls asleep gently
baby.fallAsleepGently();
//  action 3: the baby eats baby food
baby.eatBabyFood();
//  4)
//  Noun:  Musician
//  action 1: the musician tunes their instrument
musician.tuneInstrument();
//  action 2: the musician practices to a metronome
musician.practiceToMetronome();
//  action 3: the musician writes a song
musician.writeSong();
//  5)
//  Noun: Painter
//  action 1: the painter picks the colors
painter.pickColor();
//  action 2: the painter draws on the canvas
painter.drawOnCanvas():
//  action 3: the painter cleans their paintbrushes
painter.cleanPaintbrush();
//  6)
//  Noun:  Horse
//  action 1: the horse neighs
horse.Neigh();
//  action 2: the horse eats food
horse.eatFood();
//  action 3: the horse gallops
horse.Gallop();
//  7)
//  Noun:   Dog 
//  action 1: the dog runs
dog.run();
//  action 2: the dog barks at the squirrel 
dog.barkAtSquirrel();
//  action 3: the dog eats dog food
dog.eatDogFood();
//  8)
//  Noun:   Doctor 
//  action 1: the doctor sees patients 
doctor.seePatient();
//  action 2: the doctor provides medicine
doctor.provideMedicine();
//  action 3: the doctor wears scrubs
doctor.wearscrub();
//  9)
//  Noun:    
//  action 1:

//  action 2:

//  action 3:

//  10)
//  Noun:
//  action 1:

//  action 2:

//  action 3:



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
