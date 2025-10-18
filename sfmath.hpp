#ifndef _SFMATH_HPP
#define _SFMATH_HPP

#include <SFML/Graphics.hpp>
#include <cmath>

namespace sfm
{
    inline sf::Vector2f Floor(const sf::Vector2f& v)
    {
        return { floorf(v.x), floorf(v.y) };
    }#ifndef _SFMATH_HPP
#define _SFMATH_HPP

#include <SFML/Graphics.hpp>
#include <cmath>

namespace sfm
{
    inline sf::Vector2f Floor(const sf::Vector2f& v)
    {
        return { floorf(v.x), floorf(v.y) };
    }

    inline sf::Vector2f Round(const sf::Vector2f& v)
    {
        return { roundf(v.x), roundf(v.y) };
    }

    inline sf::Vector2f Ceil(const sf::Vector2f& v)
    {
        return { ceilf(v.x), ceilf(v.y) };
    }

    inline sf::Vector2i FloorToInt(const sf::Vector2f& v)
    {
        return { (int)floorf(v.x), (int)floorf(v.y) };
    }

    inline sf::Vector2i RoundToInt(const sf::Vector2f& v)
    {
        return { (int)roundf(v.x), (int)roundf(v.y) };
    }

    inline sf::Vector2i CeilToInt(const sf::Vector2f& v)
    {
        return { (int)ceilf(v.x), (int)ceilf(v.y) };
    }

    inline sf::Vector2f FloorByGrid(const sf::Vector2f& v, float step)
    {
        if (step == 0.0f) return v;
        return Floor(v / step) * step;
    }

    inline sf::Vector2f RoundByGrid(const sf::Vector2f& v, float step)
    {
        if (step == 0.0f) return v;
        return Round(v / step) * step;
    }

    inline sf::Vector2f CeilByGrid(const sf::Vector2f& v, float step)
    {
        if (step == 0.0f) return v;
        return Ceil(v / step) * step;
    }

    inline float FloorByGrid(float v, float step)
    {
        if (step == 0.0f) return v;
        return floorf(v / step) * step;
    }

    inline float RoundByGrid(float v, float step)
    {
        if (step == 0.0f) return v;
        return roundf(v / step) * step;
    }

    inline float CeilByGrid(float v, float step)
    {
        if (step == 0.0f) return v;
        return ceilf(v / step) * step;
    }

    inline float Length(const sf::Vector2f& v)
    { 
        return std::sqrt(v.x * v.x + v.y * v.y);
    }

    inline sf::Vector2f Normalize(const sf::Vector2f& v)
    {
        float len = Length(v);
        if (len == 0.0f) return sf::Vector2f(0, 0);
        return v / len;
    }

    inline sf::Vector2f ClampLength(const sf::Vector2f& v, float max)
    {
        float len = Length(v);
        if (len > max && len > 0.0f) return Normalize(v) * max;
        return v;
    }

    inline float Dot(const sf::Vector2f& v, const sf::Vector2f& q)
    {
        return v.x * q.x + v.y * q.y;
    }

    inline float Clamp(float val, float min, float max)
    {
        return fminf(fmaxf(val, min), max);
    }

    inline int Clamp(int val, int min, int max)
    {
        return (int)fminf(fmaxf(val, min), max);
    }
}

#endif


    inline sf::Vector2f Round(const sf::Vector2f& v)
    {
        return { roundf(v.x), roundf(v.y) };
    }

    inline sf::Vector2f Ceil(const sf::Vector2f& v)
    {
        return { ceilf(v.x), ceilf(v.y) };
    }

    inline sf::Vector2i FloorToInt(const sf::Vector2f& v)
    {
        return { (int)floorf(v.x), (int)floorf(v.y) };
    }

    inline sf::Vector2i RoundToInt(const sf::Vector2f& v)
    {
        return { (int)roundf(v.x), (int)roundf(v.y) };
    }

    inline sf::Vector2i CeilToInt(const sf::Vector2f& v)
    {
        return { (int)ceilf(v.x), (int)ceilf(v.y) };
    }

    inline sf::Vector2f FloorByGrid(const sf::Vector2f& v, float step)
    {
        if (step == 0.0f) return v;
        return Floor(v / step) * step;
    }

    inline sf::Vector2f RoundByGrid(const sf::Vector2f& v, float step)
    {
        if (step == 0.0f) return v;
        return Round(v / step) * step;
    }

    inline sf::Vector2f CeilByGrid(const sf::Vector2f& v, float step)
    {
        if (step == 0.0f) return v;
        return Ceil(v / step) * step;
    }

    inline float Length(const sf::Vector2f& v)
    { 
        return std::sqrt(v.x * v.x + v.y * v.y);
    }

    inline sf::Vector2f Normalize(const sf::Vector2f& v)
    {
        float len = Length(v);
        if (len == 0.0f) return sf::Vector2f(0, 0);
        return v / len;
    }

    inline sf::Vector2f ClampLength(const sf::Vector2f& v, float max)
    {
        float len = Length(v);
        if (len > max && len > 0.0f) return Normalize(v) * max;
        return v;
    }

    inline float Dot(const sf::Vector2f& v, const sf::Vector2f& q)
    {
        return v.x * q.x + v.y * q.y;
    }

    inline float Clamp(float val, float min, float max)
    {
        return fminf(fmaxf(val, min), max);
    }

    inline int Clamp(int val, int min, int max)
    {
        return (int)fminf(fmaxf(val, min), max);
    }
}

#endif

